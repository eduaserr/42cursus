<h1 align="center"> ~LIBFT~ <br><img alt="Static Badge" src="https://img.shields.io/badge/125%2F100-green?style=plastic&logoColor=green&label=success"></h1>
<div align="justify">
	<code>Libft</code> is the first project in the Common Core from 42Cursus. In this proyect you should learn how to program some standart library C functions, as many other functions that will be usefull for future proyects.
</div>

### Makefile

For compilation, you can use Makefile by tipyng `make` + rule command desired in the same directory as Makefile is ubicated.
  
A Makefile is a special file that you create name Makefile, it contains shell commands. While in the directory containing this Makefile, you will run the make command and the commands written in the Makefile will be executed. Makefile is a shell script that automate compiling repetitive tasks of compiling.  
A Makefile contains a list of rules. These rules tell the system what commands you want to execute. Most of the time, these rules are commands to compile, or recompile, a series of files.

### Rules

* all
* clean
* fclean
* re
* bonus
* rebonus

## Functions

Original Functions|Description|Aditional functions|Description|BONUS|Description
:----------------:|:----------|:-----------------:|:----------|:---:|:----------|
[ft_isalnum](#ft_isalnum)|Checks for an alphanumeric character.|[ft_substr](#ft_substr)|Returns a substring, located in the string.|[ft_lstnew](#ft_lstnew)|Creates a new element in the list.
[ft_isalpha](#ft_isalpha)|Checks for an alphabetic character.|[ft_strjoin](#ft_strjoin)|Concatenates two strings into a new string.|[ft_lstadd_front](#ft_lstadd_front)|Adds an element to the front of the list.
[ft_isascii](#ft_isascii)|Checks for an ASCII character.|[ft_strtrim](#ft_strtrim)|Trims characters from the beginning and end of a string.|[ft_lstsize](#ft_lstsize)|Returns the number of elements in the list.
[ft_isdigit](#ft_isdigit)|Checks for a digit (0 through 9).|[ft_strmapi](#ft_strmapi)|Applies a function to each character of a string to create a new string.|[ft_lstlast](#ft_lstlast)|Returns the last element of the list.
[ft_isprint](#ft_isprint)|Tests for any printable character.|[ft_striteri](#ft_striteri)|Applies a function to each character of a string (with its index).|[ft_lstadd_back](#ft_lstadd_back)|Adds an element to the end of the list.
[ft_toupper](#ft_toupper)|Converts a lowercase letter to uppercase.|[ft_itoa](#ft_itoa)|Converts an integer to a string.|[ft_lstdelone](#ft_lstdelone)|Deletes a single element from the list.
[ft_tolower](#ft_tolower)|Converts an uppercase letter to lowercase.|[ft_split](#ft_split)|Splits a string into an array of substrings.|[ft_lstclear](#ft_lstclear)|Clears all elements from the list.
[ft_strlen](#ft_strlen)|Calculates the length of a string.|[ft_putchar_fd](#ft_putchar_fd)|Outputs a character to a file descriptor.|[ft_lstiter](#ft_lstiter)|Iterates over each element of the list.
[ft_memset](#ft_memset)|Fills memory with a constant byte.|[ft_putstr_fd](#ft_putstr_fd)|Outputs a string to a file descriptor.|[ft_lstmap](#ft_lstmap)|Applies a function to each element and creates a new list.
[ft_bzero](#ft_bzero)|Sets a buffer to zero.|[ft_putendl_fd](#ft_putendl_fd)|Outputs a string to a file descriptor, followed by a newline.
[ft_calloc](#ft_calloc)|Allocates memory for an array and sets to zero.|[ft_putnbr_fd](#ft_putnbr_fd)|Outputs an integer to a file descriptor.
[ft_memchr](#ft_memchr)|Locates the first occurrence of a character in a buffer.
[ft_memcpy](#ft_memcpy)|Copies memory area from source to destination.
[ft_memmove](#ft_memmove)|Copies memory area, handling overlapping areas correctly.
[ft_memcmp](#ft_memcmp)|Compares two buffers up to a certain number of bytes.
[ft_strchr](#ft_strchr)|Locates the first occurrence of a character in a string.
[ft_strrchr](#ft_strrchr)|Locates the last occurrence of a character in a string.
[ft_strncmp](#ft_strncmp)|Compares two strings up to a certain number of characters.
[ft_strnstr](#ft_strnstr)|Locates a substring within another string, up to a certain length.
[ft_strdup](#ft_strdup)|Duplicate a string.
[ft_strlcpy](#ft_strlcpy)|Copies a string up to a certain size.
[ft_strlcat](#ft_strlcat)|Concatenates strings with a specified size limit.
[ft_atoi](#ft_atoi)|Converts a string into an integer.
