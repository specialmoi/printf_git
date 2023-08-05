# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:02:00 by pthiruma          #+#    #+#              #
#    Updated: 2023/02/08 16:02:03 by pthiruma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_strchr.c ft_putchar.c ft_putchar.c \
					ft_putdec_u.c ft_putdec.c ft_putstr.c ft_hex.c ft_ptr.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = cc
RM = rm -f


all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

exec:
	cc main.c libftprintf.a

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
