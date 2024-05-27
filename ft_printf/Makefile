# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 14:05:06 by eduaserr          #+#    #+#              #
#    Updated: 2024/05/27 15:40:47 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_funlibft_pf.c

OBJS	= $(SRCS:.c=.o)


CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all : $(NAME)

$(NAME)	: $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Compiled succesfully"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re