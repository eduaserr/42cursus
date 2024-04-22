# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 14:05:06 by eduaserr          #+#    #+#              #
#    Updated: 2024/04/22 17:09:32 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c

OBJS	= $(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all : $(NAME)

$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re