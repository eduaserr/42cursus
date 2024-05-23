/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:40:57 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/23 14:03:56 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
/**
 * @brief Function tests for any character for which isalpha(3) or
	isdigit(3) is true. 
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false and returns
	non-zero if tests true.
 */
int		ft_isalnum(int a);

/**
 * @brief Tests for any character for which isupper or islower is true. 
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false and
	returns non-zero if tests true.
 */
int		ft_isalpha(int a);

/**
 * @brief Function tests for an ASCII character, which is any character
	between 0 and octal 0177 inclusive.
 * 
 * @param a 
 * @return (int) 
 */
int		ft_isascii(int a);

/**
 * @brief Tests for a decimal digit character. 
 * 
 * @param a 
 * @return (int) Return zero if the character tests false and
	return non-zero if tests true.
 */
int		ft_isdigit(int a);
/**
 * @brief Tests for any printing character printable.
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false and
     returns non-zero if tests true.
 */
int		ft_isprint(int a);

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
 * @brief Writes 'len' bytes of value 'c' (converted to an unsigned char) to
	the string 'b'.
 *
 * @param b 
 * @param c 
 * @param len 
 * @return (void*) Returns its first argument.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * @brief Writes 'n' zeroed bytes to string 's'. If 'n' is zero, does nothing.
	Does not return a value.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief The calloc() function contigously allocates enough space for count
	objects that are size bytes of memory each and returns a pointer to the
	allocated memory. Filled with bytes of value zero.
 * 
 * @param count 
 * @param size 
 * @return (void*)Returns a pointer to allocated memory. If there is an error,
	they return a NULL pointer and set errno to ENOMEM.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Locates the first occurence of 'c' (convered to an unsigned char)
	in string 's'. Returns a pointer to the byte located, or NULL
	if no such byte exists within n bytes.
 * 
 * @param s 
 * @param c 
 * @param n 
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Copies 'n' bytes from memory area 'src' to memory area 'dst'. If dst
	and src overlap, behavior is undefined.
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return (void*) Returns the original value of 'dst'. If both param overlap,
	behavior is undefined. Should use memove(3) instead.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies 'len' bytes from string 'src' to string 'dst'.
	The two strings may overlap; always done in a non-destructive manner.
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return (void*) Returns the original value of 'dst'.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Compares byte string 's1' against byte string 's2'.
	Both strings are assumed to be 'n' bytes long.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return (int) Returns zero if the two strings are identical, otherwise
	returns the difference between the first two differing bytes
	(treated as unsigned char values).
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurence of 'c' (converted to a char) in the string
	pointed to by 's'. Null character terminated is considered to be part of the
	string; therefor if 'c' is '\0', the function locate the terminating '\0'.
 * 
 * @param s 
 * @param c 
 * @return (char*) Return a pointer to the located character, or NULL if the
	character does not appear in the string.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurence of 'c' in the 's'.
 * 
 * @param s 
 * @param c 
 * @return (char*) Returns a pointer to the located character, or NULL
	if the character does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Lexicographically compare the null-terminated strings 's1' and 's2'.
	Not more than 'n' characters. Designed for comparing strings rather than
	binary data, characters that appear after a '\0' character are not compared.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return (int) Returns an integer greater than, equal to, or less than 0.
	Is done using unsigned characters.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates the first occurence of the null-terminated string 'needle' in
	string 'haystack', where not more than 'len' characters are searched.
	Characters after '\0' are not searched.
 * 
 * @param haystack 
 * @param needle 
 * @param len 
 * @return (char*) Needle is an empty string, 'haystack' is returned; if 'needle'
	occurs nowhere in 'haystack', NULL is returned; otherwise a pointer to the
	first character of the first occurence of 'needle' is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Allocates sufficient memory for a copy of the string 's1', does the
	copy, and returns a pointer to it. The pointer may subsequently be used as
	an argument to free(3).
 * 
 * @param s1 
 * @return (char*) Returns a pointer. If memory is unavailable, (NULL)
	is returned and errno is set to ENOMEM.
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Returns a substring in the string 's'. The substring starts from index
	'start' and has a maximum length 'len'.
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return (char*) Returns the substring. NULL if malloc fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief return the new string, formed by the concatenation of 's1' and 's2'.
 * 
 * @param s1 
 * @param s2 
 * @return (char*) Returns the new string. NULL if malloc fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Remove all characters from the string 'set' at the beginning and at
	the end of 's1', until find a character not belonging to 'set'.
 * 
 * @param s1 
 * @param set 
 * @return (char*) Return trimmed string. NULL if malloc fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief For each 's' string`s character. Function 'f' giving as parameters the
	index of each character inside 's' and the character. genders a new string
	with the result of successive use of 'f'.
 * 
 * @param s 
 * @param f 
 * @return (char*) The new string after correctly use of 'f' on each character.
	NULL if malloc fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Apply the function 'f' to each characters of the string 's', passing
	its index as a first parameter. Each character is transmitted by address to
	'f' so it can be modified if necessary.
 * 
 * @param s 
 * @param f 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Converts the initial portion of the string pointed to by 'str' to
	int representation.
 * 
 * @param str 
 * @return (int)
 */
int		ft_atoi(const char *str);

/**
 * @brief Concatenate strings. Function take the full size of the
	destination buffer and guarantee NUL-termination if there is room.
	Appends string 'src' to the end of 'dst'. It will append at most
	'dstsize' - strlen(dst) - 1 characters. It will then NUL-terminate, unless
	'dstsize' is 0 or the original dst string was longer than 'dstsize'.
	If the'src' and 'dst' strings overlap, the behavior is undefined.
 * 
 * @param dest 
 * @param src 
 * @param dstsize 
 * @return (size_t) Return the total length of the string it tried to create.
	Means initial length of 'dst' plus the length of 'src'. If the return value
	is >= dstsize, the output string has been truncated.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);

/**
 * @brief Copy strings. Function take the full size of the
	destination buffer and guarantee NUL-termination if there is room.
	Copies up to 'dstsize' - 1 characters from the string 'src' to 'dst',
	NUL-terminating the result if 'dstsize' is not 0.
 * 
 * @param dest 
 * @param src 
 * @param dstsize 
 * @return (size_t) Return the total length of the string it tried to create.
	(length of src).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

/**
 * @brief Computes the length of the string. Function attempts to compute the
	length of 's', but never scans beyond the first maxlen bytes of 's'.
 * 
 * @param s 
 * @return (size_t) Returns the number of characters that precede the
     terminating NULL character.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Using malloc, generates a string that represents the value received
 * as argument. Negative numbers must be taken into account.
 * @param n 
 * @return Returns the string that equals to such number or NULL if malloc fails.
 * @warning This function uses malloc.
*/
char	*ft_itoa(int n);
/**
 * @brief Returns an array of strings obtained by splitting 's' with the
	character 'c', used as delimiter.
 * 
 * @param s 
 * @param c 
 * @return (char**) Returns an array of strings resulting from the splitting of
	's'. NULL if malloc fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Sends character 'c' to the file descriptor fd specified.
 * @param c 
 * @param fd 
 * @return 
 * @warning This function uses write.
*/
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Sends the string 's' to the file descriptor fd specified.
 * @param s 
 * @param fd 
 * @return 
 * @warning This function uses write.
*/
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Sends the string 's' to the file descriptor fd specified followed
	by a newline.
 * @param s 
 * @param fd 
 * @return 
 * @warning This function uses write.
*/
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Sends the int 'n' to the file descriptor fd specified.
 * @param n
 * @param fd
 * @return 
 * @warning This function uses write.
*/
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif