# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 14:05:06 by eduaserr          #+#    #+#              #
#    Updated: 2024/05/21 20:32:33 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c

OBJS	= $(SRCS:.c=.o)


CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all : $(NAME)

$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re